คำสั่งพื้นฐาน
mkdir //สร้าง directory
dir   //เรียกดู
d:    //เปลียน drive
cd .. //ย้อนกลับ

git --VERSION //ตรวงสอบเวอร์ชั่น
git init      //ทำให้ work directory เป็น ไฟล์ git repository 
//ขั้นตอนนี้ะมีไฟล์ .git ออกมา ห้ามไปยุ่งกับมัน
git status    //ตรวจสอบสถานะความเปลี่ยนแปลงในไฟล์ git repository
git add <ตามด้วยชื่อไฟล์>// เป็นการเพิ่ม ไฟล์เข้า staging area เพื่อรอ commit
git config user.name "Your Name"
git config user.email "yourmail@ku.th" //ระบุบตัวผู้ commit
git commit -m "Add a.txt"  //commit งาน เพื่อ save checkpoint (อย่างลืม -m เป็นอันขาด)
git log --all --decorate --oneline --graph  // ดูcheckpoint ทั้งหมด

EX
git log --all --decorate --oneline --graph
* 432cc2a (HEAD -> master) Update a and add b
* f0a9b41 Add a.txt
//ตัวเลข 7 หลัก แสดง memory


การอัพขึ้น git hub
git remote add <ชื่อ remote เช่น origin> <git url>

เมื่อเชื่อมต่อได้แล้วให้ git push -u ชื่อ remote master
ตรวจสอบ Checkpoint ดููว่าถูกจัดเก็บไว้ที่ ชื่อ remote/master หรือไม่

// ประโยชน์อย่างหนึ่งของการใช้ git คือ สามารถนำ Checkpoint เก่ากลับมาทำงานได้ โดยทำได้ 2 แบบคือ

// กลับมาทั้งหมด
// 	git checkout <commit-id>

// กลับมาบางไฟล์
// 	git checkout <commit-id>  <ชื่อไฟล์>

git clone <git-url>  // เพื่อดึงไฟล์กลับมายังเครื่อง
EX git clone https://github.com/saacsos/git101.git
 

