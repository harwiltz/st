/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#000000", /* black   */
  [1] = "#FF0000", /* red     */
  [2] = "#44aa44", /* green   */
  [3] = "#33cc33", /* yellow  */
  [4] = "#444477", /* blue    */
  [5] = "#333355", /* magenta */
  [6] = "#97b4bc", /* cyan    */
  [7] = "#d3e6eb", /* white   */

  /* 8 bright colors */
  [8]  = "#003344", /* black   */
  [9]  = "#FF3333", /* red     */
  [10] = "#aaaa00", /* green   */
  [11] = "#ffff00", /* yellow  */
  [12] = "#be87cc", /* blue    */
  [13] = "#be87aa", /* magenta */
  [14] = "#00bbdd", /* cyan    */
  [15] = "#00dddd", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#d3e6eb", /* foreground */
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
