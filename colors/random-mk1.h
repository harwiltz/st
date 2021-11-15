/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#070304", /* black   */
  [1] = "#1d0f14", /* red     */
  [2] = "#351e27", /* green   */
  [3] = "#553440", /* yellow  */
  [4] = "#7e4f61", /* blue    */
  [5] = "#b07088", /* magenta */
  [6] = "#cba6b2", /* cyan    */
  [7] = "#ebdfe3", /* white   */

  /* 8 bright colors */
  [8]  = "#70a5c0", /* black   */
  [9]  = "#d69a4d", /* red     */
  [10] = "#c293e3", /* green   */
  [11] = "#ee9fbc", /* yellow  */
  [12] = "#8daa68", /* blue    */
  [13] = "#6eac9d", /* magenta */
  [14] = "#ec78a7", /* cyan    */
  [15] = "#e1cdf2", /* white   */

  /* special colors */
  [256] = "#040102", /* background */
  [257] = "#eadce0", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
