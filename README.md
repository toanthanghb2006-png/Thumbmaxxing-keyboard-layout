# Overview of AEOI keyboard layout:
Inspired by Stenography, Kuntem, Graphite... and many other ergonomic layouts' logics, this layout I created have some unique features including separating the vowels from the consonants, utilizing the thumbs, which are often overlooked in traditional keyboard layouts, and optimizing for typing in Vietnamese (since Vietnamese is my mother tongue). 

# Disclaimers:
- This layout is builted with QMK, so there is no available ZMK file since I'm not really familiar with ZMK. If you like my layout, you can build one that work with ZMK based on the files I provided.
- I built this layout to specifically work on my 4x10 ortholinear keyboard (banime40), it might also work on other ortholinear devices, I'm not sure about traditional staggered and column staggered types, you guys could try and tell me.
- I don't know how to make a layout illustration image like those you see on website and by other user (i'm not a programmer, coder or someone to know about that stuff really well, just a normal guy), so i hope with my explanation and the code itself can help you uunderstand my point and logic behind this layout.
- Other than the letter and the number layers, all rest (mouse, arrow, function,...) are customized to fit my daily uses, you can change whatever you like to fit your preference.

# In-depth details:
In this layout, the thumbs are responsible for all the vowels, spacing and layers switching; while other fingers are in charge of the consonants, typing numbers, symbols and modifier keys.
  # The thumbs:
  - The letters A and E are typed using the left thumb, you can output the letter U by pressing both A and E at the same time. The right thumb will be used to type letter O and I, to type letter Y you press O and I at the same time.
  - To output space, you press any thumb key combination other then two presented above (A + O, A + E + I, A + E + I + O...)
  - Holding the letter E will enter number and symbol layer, holding the letter O will enter the Shift-holding state of that layer (I will talk about this later).
  - Holding the A letter will enter the mouse layer, while holding the I will enter arrowkey and shortcuts layer. Holding O and E at the same time will enter function layer (F1-F12, brightness and volume control...).
  # The other 8 fingers: 
  The letter (default layer)
  - All the consonants are presented in the homerow and the upperrow, allowing you to access all the letter by only moving up to one row. The most common letters (T and N if my researches is right) are placed underthe middle fingers, so that the index fingers can be more free covering all other less common (but still very vommon) letters (4 letters each index finger). The diagonal key from the home placement of the index fingers are also designed with least common letters (Q and Z) so that those fingers actually only need to worry about the letters above and next to it (reaching for the diagonal keys in ortholinear is harder than in the traditional staggered keyboards).
  - The ring and pinky fingers are assigned with less common letters. However these letters are very important in Vietnamese since they are assigned for tone changes, I intentionally design them to be specific on the pinky and rings to separate them (once again) from the normal consonants umder middle and index fingers (if you are non-Vietnamese typers you don't have to care about this).
  - The modifier key are placed in the lower row, they also serve as editing key using the tap-hold function of QMK:
  -   Left index:  Shift-Space;   Right index:  Shift-Enter
  -   Left middle: Ctrl-Tab;    Right middle: Ctrl-Backspace
  -   Left ring:   Alt-Escape;     Right ring:   Alt-Delete
  -   Left and right pinky: GUI/Window buttons

  The numbers and symbols layer: 

  - In this layer, the right hand will take the numbers presented in form of the numpad, while the left hand will work with the symbols.
  - The numpad are assigned to the right hand, presented in 4x3 grid, in 3 rows, from left to right: lowerrow: 1234, homerow: 5678, upperrow: 90-=
  - The symbols are put on the left hand, from right to left: homerow: dot, comma, slash (since these three are used very frequently, but not presented in the default layer of my layout, i have to make sure they're in position to be as easy to reach as possible); Upperrow: quotation, semicolon, grave; Lowerrow: right bracket, left bracket, back slash.
  - I've also noticed that after a symbol, a mark there will be a space follows right after, in order to make this easier for user, if you hold the E key, the O key become the spacebar and vice versa.

# Optimization for Vietnamese (this part i will write in Vietnamese since my Linguistic knowledge in English is small, if you want you can use google translate to see my point)
- Bàn phím qwerty thông thường từ trước đến nay mang tiếng tệ vcl thì ai chơi layout bàn phím thì cũng đều biết rồi, một số ví dụ có thể thấy rõ như là chữ sắc (phải đổi vị trí ngón áp út liên tục) hay chữ nhụy (dùng full ngón cái), việc đưa các phím nguyên âm xuống ngón cái đã giải quyết được phần lớn việc di chuyển một ngón tay quá nhiều. Tuy nhiên, nếu các phụ âm còn lại sắp xếp không hợp lý, trải nghiệm gõ một cách công thái học cũng sẽ không đạt được hiệu quả tối đa.
- Giải pháp mà mình đưa ra chímh là tách các phụ âm có nhiệm vụ tạo dấu và mũ trong tiếng việt ra một khoảng riêng, hạn chế được tình trạng vừa gõ xong phụ âm cuối đã phải di chuyển chính ngón đó để gõ dấu (ví dụ chữ "nịnh", sau khi gõ xong phụ âm cuối phải sử dụng chính ngón đó để gõ dấu nặng (j)).
- riêng chữ w (đảm nhận vai trò thêm mũ, móc cho chữ ă, ơ) sẽ được bố trí để riêng ra, giúp cho việc gõ dấu và gõ mũ do các ngón khác nhau phụ trách, hạm chế tình trạng vừa gõ mũ xong đã phải gõ dấu bằng chính ngón đó (ví dụ: sắc đà nẵng,...).
- Các phụ âm V và K được để cùng trong cụm gõ dấu bởi lẽ tiếng Việt không có âm nào kết thúc bằng hai phụ âm trên, do đó không phải lo về việc di chuyển ngón gõ dấu đối với hai phụ âm này (cá biệt có tên địa danh Đắk Lắk, Đắk Nông... tuy nhiên dấu sắc-chữ s, cũng như chữ r, hai phụ âm hay dùng trong cả tiếng anh và tiếng việt, được để chéo so với hai phụ âm V và K).
