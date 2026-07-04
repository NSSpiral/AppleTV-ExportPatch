/* Runtime dump - CADisplay
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplay : NSObject
{
    void * _impl;
}

@property (readonly, nonatomic) NSArray * availableModes;
@property (retain, nonatomic) CADisplayMode * currentMode;
@property (readonly, nonatomic) CADisplayMode * preferredMode;
@property (copy, nonatomic) NSString * colorMode;
@property char allowsVirtualModes;
@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) struct CGRect safeBounds;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * deviceName;
@property (readonly) unsigned int displayId;
@property (readonly) unsigned int seed;
@property (readonly) unsigned int connectionSeed;
@property (readonly) NSString * uniqueId;
@property (readonly) char supported;
@property (readonly) int tag;
@property (readonly) char external;
@property (readonly) double refreshRate;
@property (readonly) char overscanned;
@property (copy, nonatomic) NSString * overscanAdjustment;
@property (readonly) float overscanAmount;
@property (readonly) char cloned;
@property (readonly) char cloningSupported;

+ (NSObject *)TVOutDisplay;
+ (FBSDisplay *)mainDisplay;
+ (CADisplay *)displays;
+ (char)automaticallyNotifiesObserversForKey:(NSString *)arg0;

- (char)isSupported;
- (char)isCloned;
- (NSObject *)_initWithDisplay:(struct Display *)arg0;
- (unsigned int)connectionSeed;
- (struct CGRect)safeBounds;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (NSString *)description;
- (NSString *)name;
- (unsigned int)displayId;
- (int)tag;
- (CADisplayMode *)currentMode;
- (void)update;
- (NSArray *)availableModes;
- (char)isOverscanned;
- (NSString *)overscanAdjustment;
- (void)setOverscanAdjustment:(NSString *)arg0;
- (float)overscanAmount;
- (double)refreshRate;
- (char)isCloningSupported;
- (CADisplayMode *)preferredMode;
- (void)setCurrentMode:(CADisplayMode *)arg0;
- (unsigned int)seed;
- (char)isExternal;
- (NSString *)uniqueId;
- (void)_invalidate;
- (NSString *)colorMode;
- (void)setColorMode:(NSString *)arg0;
- (char)allowsVirtualModes;
- (void)setAllowsVirtualModes:(char)arg0;
- (NSString *)deviceName;

@end
