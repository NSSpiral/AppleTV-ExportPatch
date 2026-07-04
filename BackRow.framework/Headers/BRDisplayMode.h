/* Runtime dump - BRDisplayMode
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRDisplayMode : NSObject
{
    CADisplayMode * _displayMode;
    double _refreshRate;
    char _isVirtual;
}

- (char)safe;
- (char)safeForHardware;
- (char)interlaced;
- (char)isVirtual;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned long)width;
- (unsigned long)height;
- (double)refreshRate;
- (CADisplayMode *)displayMode;
- (BRDisplayMode *)initWithDisplayMode:(CADisplayMode *)arg0 refreshRate:(double)arg1 isVirtual:(char)arg2;
- (unsigned long)bitsPerPixel;

@end
