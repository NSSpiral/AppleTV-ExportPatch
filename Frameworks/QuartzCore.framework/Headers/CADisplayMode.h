/* Runtime dump - CADisplayMode
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayMode : NSObject
{
    void * _priv;
    CADisplay * _dpy;
    unsigned long _width;
    unsigned long _height;
}

@property (readonly, nonatomic) unsigned long width;
@property (readonly, nonatomic) unsigned long height;
@property (readonly, nonatomic) float pixelAspectRatio;

+ (CADisplayMode *)_displayModeWithMode:(int)arg0 display:(NSObject *)arg1;

- (int)_mode;
- (CADisplayMode *)_initWithMode:(int)arg0 display:(NSObject *)arg1;
- (void)_setWidth:(unsigned long)arg0 height:(unsigned long)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned long)width;
- (unsigned long)height;
- (float)pixelAspectRatio;
- (NSObject *)_display;

@end
