นี่คือโค้ด HTML ที่ได้รับการปรับแก้ไขตามที่ขอเรียบร้อยแล้วครับ:
 1. **ลบหัวข้อ/ข้อความ Princess Usahana ออกแล้ว**
 2. **เปลี่ยนฟอนต์ของคำว่า Portfolio** ให้ใช้ฟอนต์ **Great Vibes** (ฟอนต์แบบเดียวกับที่เคยใช้กับ Princess Usahana)
 3. **ปรับสไตล์และเลย์เอาต์ให้เรียบหรู ดูทันสมัย มินิมอล มีมิติ** มีความสะอาดตาและเป็นมืออาชีพ ใกล้เคียงกับสไตล์ของเว็บไซต์พอร์ตโฟลิโอตัวอย่าง พร้อมทั้งยังคงระบบสไลด์ การ์ดข้อมูล และการรองรับการปัดหน้าจอ (Touch Swipe) ไว้เต็มรูปแบบ
```html
<!DOCTYPE html>
<html lang="th">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>แฟ้มสะสมผลงาน (Portfolio) - วรรธนันท์ อุดมเดชภาคินทร์</title>
<style>
/* นำเข้าฟอนต์ Google Fonts: Great Vibes (คำว่า Portfolio), Baloo 2 และ Mali (เนื้อหา) */
@import url('https://fonts.googleapis.com/css2?family=Baloo+2:wght@500;600;700;800&family=Great+Vibes&family=Mali:ital,wght@0,300;0,400;0,600;0,700;1,400&display=swap');

* {
    box-sizing: border-box;
}

body {
    font-family: 'Mali', cursive, sans-serif;
    margin: 0;
    padding: 30px 15px;
    background: linear-gradient(135deg, #f8f9fa 0%, #e9ecef 100%);
    background-attachment: fixed;
    position: relative;
    overflow-x: hidden;
    min-height: 100vh;
    color: #2b2b2b;
}

/* ตกแต่งพื้นหลังเรืองแสงแบบซอฟต์ๆ มินิมอล */
body::before {
    content: '';
    position: fixed;
    top: -100px;
    right: -100px;
    width: 350px;
    height: 350px;
    background: rgba(255, 182, 193, 0.35);
    filter: blur(80px);
    border-radius: 50%;
    z-index: 0;
}

body::after {
    content: '';
    position: fixed;
    bottom: -100px;
    left: -100px;
    width: 350px;
    height: 350px;
    background: rgba(173, 216, 230, 0.35);
    filter: blur(80px);
    border-radius: 50%;
    z-index: 0;
}

.container {
    max-width: 860px;
    margin: auto;
    position: relative;
    z-index: 1;
}

/* ส่วนหัวโปรไฟล์ */
.header-wrapper {
    text-align: center;
    margin-bottom: 25px;
}

.profile-card {
    width: 130px;
    height: 130px;
    border-radius: 50%;
    background: #ffffff;
    display: flex;
    align-items: center;
    justify-content: center;
    margin: 0 auto 15px auto;
    box-shadow: 0 10px 25px rgba(0, 0, 0, 0.08);
    border: 3px solid #ffffff;
    transition: transform 0.3s ease, box-shadow 0.3s ease;
}

.profile-card:hover {
    transform: translateY(-4px);
    box-shadow: 0 15px 30px rgba(0, 0, 0, 0.12);
}

.profile-card img {
    width: 120px;
    height: 120px;
    border-radius: 50%;
    object-fit: cover;
}

/* หัวข้อ Portfolio ใช้ฟอนต์ Great Vibes (สไตล์ Princess Usahana เดิม) */
.main-title {
    font-family: 'Great Vibes', cursive;
    font-size: 72px;
    margin: 0;
    color: #333333;
    font-weight: normal;
    line-height: 1;
    letter-spacing: 1px;
}

.sub-name {
    font-size: 20px;
    font-weight: 600;
    color: #4a4a4a;
    margin-top: 8px;
    letter-spacing: 0.5px;
}

/* แถบเมนูนำทาง (Tabs Navigation) สไตล์แคปซูลมินิมอล */
.nav-tabs {
    display: flex;
    justify-content: center;
    overflow-x: auto;
    gap: 10px;
    padding: 8px;
    margin-bottom: 20px;
    background: rgba(255, 255, 255, 0.8);
    backdrop-filter: blur(10px);
    border-radius: 30px;
    box-shadow: 0 4px 20px rgba(0,0,0,0.04);
}

.nav-tabs::-webkit-scrollbar {
    display: none;
}

.nav-btn {
    background: transparent;
    color: #666666;
    padding: 8px 20px;
    border-radius: 20px;
    font-size: 16px;
    font-weight: 600;
    font-family: 'Mali', cursive;
    border: none;
    cursor: pointer;
    white-space: nowrap;
    transition: all 0.3s ease;
}

.nav-btn.active, .nav-btn:hover {
    background: #2b2b2b;
    color: #ffffff;
    box-shadow: 0 4px 12px rgba(0,0,0,0.15);
}

/* Slider Container */
.slider-wrapper {
    overflow: hidden;
    width: 100%;
    border-radius: 24px;
}

.slides-container {
    display: flex;
    transition: transform 0.4s cubic-bezier(0.25, 1, 0.5, 1);
    width: 100%;
}

.slide {
    min-width: 100%;
    box-sizing: border-box;
}

/* กรอบเนื้อหาการ์ด */
.box {
    background: rgba(255, 255, 255, 0.95);
    padding: 35px 30px;
    border-radius: 24px;
    position: relative;
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.05);
    border: 1px solid rgba(255, 255, 255, 0.8);
    min-height: 380px;
}

h2 {
    color: #222222;
    font-size: 24px;
    font-family: 'Baloo 2', cursive;
    font-weight: 700;
    border-bottom: 2px solid #f0f0f0;
    padding-bottom: 12px;
    margin-top: 0;
    margin-bottom: 20px;
    display: flex;
    align-items: center;
    gap: 8px;
}

.fancy-text {
    font-family: 'Baloo 2', cursive;
    font-weight: 600;
    font-size: 20px;
    color: #888888;
    margin-left: auto;
}

p, ul {
    font-size: 16px;
    color: #4a4a4a;
    line-height: 1.8;
}

.info-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
    gap: 15px;
    margin-top: 15px;
}

.info-item {
    background: #fdfdfd;
    padding: 12px 16px;
    border-radius: 12px;
    border: 1px solid #eaeaea;
    font-size: 15px;
}

.info-item b {
    color: #222;
}

/* ประวัติการศึกษา */
.edu-lines {
    margin-top: 15px;
}

.edu-line {
    background: #fdfdfd;
    padding: 18px 20px;
    border-radius: 16px;
    border: 1px solid #eaeaea;
    margin-bottom: 15px;
}

.edu-line:last-child {
    margin-bottom: 0;
}

.edu-line b {
    color: #111111;
    font-size: 16px;
}

/* กิจกรรมแลกเปลี่ยน */
.exchange-title {
    font-size: 16px;
    color: #2c3e50;
    background: #f8f9fa;
    border: 1px solid #e9ecef;
    border-radius: 12px;
    padding: 15px;
    margin: 10px 0 20px 0;
    text-align: center;
    line-height: 1.6;
}

.cert-box {
    width: 100%;
    aspect-ratio: 16 / 9;
    background: #f1f3f5;
    border: 1px dashed #ced4da;
    border-radius: 16px;
    display: flex;
    align-items: center;
    justify-content: center;
    color: #adb5bd;
    font-size: 16px;
    text-align: center;
    margin-bottom: 20px;
    overflow: hidden;
}

.cert-box img {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

.photo-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(130px, 1fr));
    gap: 12px;
}

.photo-box {
    aspect-ratio: 1 / 1;
    background: #f1f3f5;
    border: 1px solid #dee2e6;
    border-radius: 12px;
    display: flex;
    align-items: center;
    justify-content: center;
    color: #adb5bd;
    font-size: 14px;
    text-align: center;
    overflow: hidden;
}

.photo-box img {
    width: 100%;
    height: 100%;
    object-fit: cover;
}

/* ปุ่มควบคุมล่าง */
.controls {
    display: flex;
    justify-content: space-between;
    margin-top: 25px;
}

.btn {
    background: #ffffff;
    color: #333333;
    padding: 10px 24px;
    text-decoration: none;
    border-radius: 20px;
    font-size: 16px;
    font-weight: 600;
    font-family: 'Mali', cursive;
    box-shadow: 0 4px 12px rgba(0,0,0,0.05);
    transition: all 0.3s ease;
    border: 1px solid #e0e0e0;
    cursor: pointer;
    display: inline-block;
}

.btn:hover {
    background: #2b2b2b;
    color: #ffffff;
    border-color: #2b2b2b;
    transform: translateY(-2px);
}

.btn:disabled {
    background: #f5f5f5;
    color: #ccc;
    border-color: #eee;
    box-shadow: none;
    cursor: not-allowed;
    transform: none;
}

.footer {
    text-align: center;
    font-size: 14px;
    color: #777777;
    margin-top: 30px;
    padding: 10px;
    font-family: 'Mali', cursive;
}
</style>
</head>
<body>

<div class="container">

    <!-- ส่วนหัว -->
    <div class="header-wrapper">
        <div class="profile-card">
            <img src="IMG_4109.png" alt="รูปโปรไฟล์">
        </div>
        <h1 class="main-title">Portfolio</h1>
        <div class="sub-name">วรรธนันท์ อุดมเดชภาคินทร์</div>
    </div>

    <!-- แถบเมนูนำทาง (Tabs Navigation) -->
    <nav class="nav-tabs">
        <button class="nav-btn active" onclick="goToSlide(0)">ประวัติส่วนตัว</button>
        <button class="nav-btn" onclick="goToSlide(1)">ประวัติการศึกษา</button>
        <button class="nav-btn" onclick="goToSlide(2)">กิจกรรม</button>
        <button class="nav-btn" onclick="goToSlide(3)">ความสนใจในการศึกษาต่อ</button>
    </nav>

    <!-- พื้นที่สไลด์เลื่อนซ้าย-ขวา -->
    <div class="slider-wrapper" id="sliderWrapper">
        <div class="slides-container" id="slidesContainer">

            <!-- Slide 1: ประวัติส่วนตัว -->
            <div class="slide">
                <div class="box">
                    <h2>👩‍🎓 ประวัติส่วนตัว <span class="fancy-text">Profile</span></h2>
                    <div class="info-grid">
                        <div class="info-item"><b>ชื่อ-นามสกุล :</b> วรรธนันท์ อุดมเดชภาคินทร์</div>
                        <div class="info-item"><b>ชื่อเล่น :</b> ปริ้นเซส</div>
                        <div class="info-item"><b>วันเกิด :</b> 17 พฤศจิกายน 2551</div>
                        <div class="info-item"><b>อายุ :</b> 17 ปี</div>
                        <div class="info-item"><b>ระดับชั้น :</b> มัธยมศึกษาปีที่ 6</div>
                        <div class="info-item"><b>แผนการเรียน :</b> Gifted</div>
                    </div>
                </div>
            </div>

            <!-- Slide 2: ประวัติการศึกษา -->
            <div class="slide">
                <div class="box">
                    <h2>📚 ประวัติการศึกษา <span class="fancy-text">Education</span></h2>
                    <div class="edu-lines">
                        <div class="edu-line">
                            <b>🏫 ระดับมัธยมศึกษาตอนปลาย (ม.4 - ม.6) :</b> โรงเรียนบ้านบึง "อุตสาหกรรมนุเคราะห์" (แผนการเรียน Gifted)
                        </div>
                        <div class="edu-line">
                            <b>🏫 ระดับมัธยมศึกษาตอนต้น (ม.1 - ม.3) :</b> โรงเรียนบ้านบึง "อุตสาหกรรมนุเคราะห์" (แผนการเรียน Gifted)
                        </div>
                    </div>
                </div>
            </div>

            <!-- Slide 3: กิจกรรมและเกียรติบัตร -->
            <div class="slide">
                <div class="box">
                    <h2>🏆 กิจกรรมและเกียรติบัตร <span class="fancy-text">Activities</span></h2>

                    <div class="exchange-title">
                        <b>โครงการแลกเปลี่ยนทางวิชาการครั้งที่ 10</b><br>
                        ระหว่างโรงเรียนมัธยมศึกษาอิจิคาว่า ประเทศญี่ปุ่น<br>
                        และโรงเรียนวิทยาศาสตร์จุฬาภรณราชวิทยาลัย
                    </div>

                    <div class="cert-box">
                        🖼️ วางรูปเกียรติบัตรที่นี่
                    </div>

                    <div class="photo-grid">
                        <div class="photo-box">📷 รูปที่ 1</div>
                        <div class="photo-box">📷 รูปที่ 2</div>
                        <div class="photo-box">📷 รูปที่ 3</div>
                    </div>
                </div>
            </div>

            <!-- Slide 4: ความสนใจในการศึกษาต่อ + คติประจำใจ -->
            <div class="slide">
                <div class="box">
                    <h2>🎯 ความสนใจในการศึกษาต่อ <span class="fancy-text">Interests</span></h2>
                    <p>
                        <b>สนใจคณะ/สาขา :</b><br>
                        มีความสนใจเข้าศึกษาต่อในระดับอุดมศึกษา ในสาขาวิชาที่เกี่ยวข้องกับเทคโนโลยีสารสนเทศ วิทยาการคอมพิวเตอร์ หรือการออกแบบดิจิทัล เนื่องจากมีความหลงใหลในการคิดวิเคราะห์ พัฒนาโปรแกรม และการสร้างสรรค์ผลงานผ่านเทคโนโลยีใหม่ ๆ เพื่อประยุกต์ใช้ในอนาคต
                    </p>
                    <hr style="border: 0; border-top: 1px dashed #e0e0e0; margin: 20px 0;">
                    <p><b>คติประจำใจ :</b><br><i style="font-size: 18px; color: #2b2b2b;">"ใครทำได้ ก็ให้เขาทำ"</i></p>
                </div>
            </div>

        </div>
    </div>

    <!-- ปุ่มนำทาง ย้อนกลับ-ถัดไป -->
    <div class="controls">
        <button class="btn" id="prevBtn" onclick="goBackOrHome()">❮ ย้อนกลับ</button>
        <button class="btn" id="nextBtn" onclick="changeSlide(1)">ถัดไป ❯</button>
    </div>

    <!-- ฟุตเตอร์ -->
    <div class="footer">
        © Portfolio - Wantanan Udomdetphakin
    </div>

</div>

<script>
let currentSlide = 0;
const slidesContainer = document.getElementById('slidesContainer');
const totalSlides = document.querySelectorAll('.slide').length;
const navButtons = document.querySelectorAll('.nav-btn');
const prevBtn = document.getElementById('prevBtn');
const nextBtn = document.getElementById('nextBtn');

function updateSlidePosition() {
    slidesContainer.style.transform = `translateX(-${currentSlide * 100}%)`;

    // อัปเดตสถานะปุ่มแท็บ
    navButtons.forEach((btn, index) => {
        if(index === currentSlide) {
            btn.classList.add('active');
            btn.scrollIntoView({ behavior: 'smooth', inline: 'center', block: 'nearest' });
        } else {
            btn.classList.remove('active');
        }
    });

    prevBtn.disabled = false;
    nextBtn.disabled = currentSlide === totalSlides - 1;
}

function goToSlide(index) {
    currentSlide = index;
    updateSlidePosition();
}

function changeSlide(direction) {
    currentSlide += direction;
    if (currentSlide < 0) currentSlide = 0;
    if (currentSlide >= totalSlides) currentSlide = totalSlides - 1;
    updateSlidePosition();
}

function goBackOrHome() {
    if (currentSlide === 0) {
        window.location.href = 'index.html';
    } else {
        changeSlide(-1);
    }
}

// รองรับการใช้นิ้วปัดซ้าย-ขวาบนหน้าจอมือถือ (Touch Swipe)
let touchStartX = 0;
let touchEndX = 0;
const sliderWrapper = document.getElementById('sliderWrapper');

sliderWrapper.addEventListener('touchstart', e => {
    touchStartX = e.changedTouches[0].screenX;
});

sliderWrapper.addEventListener('touchend', e => {
    touchEndX = e.changedTouches[0].screenX;
    handleSwipe();
});

function handleSwipe() {
    if (touchStartX - touchEndX > 50) {
        if (currentSlide < totalSlides - 1) changeSlide(1);
    }
    if (touchEndX - touchStartX > 50) {
        if (currentSlide > 0) changeSlide(-1);
    }
}

updateSlidePosition();
</script>

</body>
</html>

```
