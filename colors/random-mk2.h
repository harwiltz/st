/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12181b", /* black   */
  [1] = "#1a2125", /* red     */
  [2] = "#293338", /* green   */
  [3] = "#3d4b52", /* yellow  */
  [4] = "#576a72", /* blue    */
  [5] = "#758e9a", /* magenta */
  [6] = "#99b8c7", /* cyan    */
  [7] = "#d7e4ec", /* white   */

  /* 8 bright colors */
  [8]  = "#a991c6", /* black   */
  [9]  = "#728d9a", /* red     */
  [10] = "#788b51", /* green   */
  [11] = "#d795b1", /* yellow  */
  [12] = "#b69fd2", /* blue    */
  [13] = "#bd8f6a", /* magenta */
  [14] = "#ca84a2", /* cyan    */
  [15] = "#bfa6df", /* white   */

  /* special colors */
  [256] = "#0a0f11", /* background */
  [257] = "#b6d0dd", /* foreground */
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
