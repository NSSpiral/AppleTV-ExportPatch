/* Runtime dump - SBLockOverlayStylePropertiesFactory
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBLockOverlayStylePropertiesFactory : NSObject
{
    NSMutableDictionary * _deviceQualityToProperties;
    unsigned int _style;
}

@property (readonly, nonatomic) unsigned int style;

+ (NSObject *)overlayPropertiesFactoryWithStyle:(unsigned int)arg0;

- (void)dealloc;
- (unsigned int)style;
- (SBLockOverlayStylePropertiesFactory *)initWithStyle:(unsigned int)arg0;
- (id)propertiesWithGraphicsQuality:(int)arg0;
- (id)_fetchAndCachePropsForDeviceQuality:(int)arg0;
- (id)propertiesWithDeviceDefaultGraphicsQuality;

@end
