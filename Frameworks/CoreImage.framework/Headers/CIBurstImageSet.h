/* Runtime dump - CIBurstImageSet
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageSet : NSObject
{
    CIBurstImageSetInternal * _priv;
}

+ (CIBurstImageSet *)defaultVersionString;
+ (CIBurstImageSet *)burstImageSet;
+ (NSDictionary *)burstImageSetWithOptions:(NSDictionary *)arg0;

- (NSString *)burstId;
- (NSString *)bestImageIdentifiers;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg0 properties:(NSDictionary *)arg1 identifier:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (NSString *)imageClusterForIdentifier:(NSString *)arg0;
- (char)isPortrait;
- (char)isAction;
- (NSMutableArray *)allImageIdentifiers;
- (double)secondsSinceStart;
- (NSString *)statsForImageWithIdentifier:(NSString *)arg0;
- (NSString *)coverImageIdentifier;
- (unsigned int)imageClusterCount;
- (NSObject *)imageClusterForIndex:(unsigned int)arg0;
- (void)setLoggingListener:(void *)arg0 withUserInfo:(void *)arg1;
- (void)dealloc;
- (CIBurstImageSet *)init;
- (CIBurstImageSet *)initWithOptions:(NSDictionary *)arg0;

@end
