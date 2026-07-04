/* Runtime dump - CAWindowServerDisplay
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServerDisplay : NSObject
{
    void * _impl;
}

@property (readonly) struct CGRect bounds;
@property float scale;
@property (readonly) NSString * name;
@property (readonly) NSString * deviceName;
@property (readonly) unsigned int displayId;
@property (readonly) NSString * uniqueId;
@property (readonly) unsigned int rendererFlags;
@property (readonly) NSSet * clones;
@property (readonly) CAWindowServerDisplay * cloneMaster;
@property char blanked;
@property (copy) NSString * orientation;
@property float overscanAmount;
@property char invertsColors;
@property char grayscale;
@property float contrast;
@property float maximumBrightness;
@property float minimumRefreshRate;
@property float maximumRefreshRate;
@property float idealRefreshRate;
@property char usesPreferredModeRefreshRate;
@property (copy, nonatomic) NSString * colorMode;
@property char allowsVirtualModes;
@property char mirroringEnabled;
@property int tag;
@property (copy) NSString * TVMode;
@property (copy) NSString * TVSignalType;
@property char secure;

- (void)setMirroringEnabled:(char)arg0;
- (char)isMirroringEnabled;
- (unsigned int)rendererFlags;
- (unsigned int)clientPortOfContextId:(unsigned int)arg0;
- (unsigned int)taskPortOfContextId:(unsigned int)arg0;
- (void)addClone:(id)arg0 options:(NSDictionary *)arg1;
- (NSObject *)_initWithCADisplayServer:(struct Server *)arg0;
- (unsigned int)contextIdAtPosition:(struct CGPoint)arg0;
- (unsigned int)clientPortAtPosition:(struct CGPoint)arg0;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 toContextId:(unsigned int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg0 fromContextId:(unsigned int)arg1;
- (NSSet *)clones;
- (void)addClone:(id)arg0;
- (void)removeClone:(id)arg0;
- (void)removeAllClones;
- (CAWindowServerDisplay *)cloneMaster;
- (void)setBlanked:(char)arg0;
- (char)isBlanked;
- (void)willUnblank;
- (void)setOverscanAmount:(float)arg0;
- (void)setInvertsColors:(char)arg0;
- (char)invertsColors;
- (void)setGrayscale:(char)arg0;
- (char)isGrayscale;
- (void)setMaximumBrightness:(float)arg0;
- (float)maximumBrightness;
- (void)setMinimumRefreshRate:(float)arg0;
- (float)minimumRefreshRate;
- (void)setMaximumRefreshRate:(float)arg0;
- (float)maximumRefreshRate;
- (void)setIdealRefreshRate:(float)arg0;
- (float)idealRefreshRate;
- (void)setUsesPreferredModeRefreshRate:(char)arg0;
- (char)usesPreferredModeRefreshRate;
- (void)setTVMode:(id)arg0;
- (NSString *)TVMode;
- (void)setTVSignalType:(NSObject *)arg0;
- (NSString *)TVSignalType;
- (void)dealloc;
- (struct CGRect)bounds;
- (NSString *)description;
- (NSString *)name;
- (void)invalidate;
- (NSString *)orientation;
- (unsigned int)displayId;
- (float)scale;
- (void)setContrast:(float)arg0;
- (void)setSecure:(char)arg0;
- (char)isSecure;
- (int)tag;
- (void)setTag:(int)arg0;
- (void)setScale:(float)arg0;
- (void)setOrientation:(NSString *)arg0;
- (void)update;
- (float)overscanAmount;
- (NSString *)uniqueId;
- (float)contrast;
- (NSString *)colorMode;
- (void)setColorMode:(NSString *)arg0;
- (char)allowsVirtualModes;
- (void)setAllowsVirtualModes:(char)arg0;
- (NSString *)deviceName;

@end
