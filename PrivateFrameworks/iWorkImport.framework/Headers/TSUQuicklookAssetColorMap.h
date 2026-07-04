/* Runtime dump - TSUQuicklookAssetColorMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUQuicklookAssetColorMap : NSObject
{
    NSMutableDictionary * mAssetMap;
    NSString * mAppAssetPath;
}

@property (retain, nonatomic) NSMutableDictionary * assetMap;
@property (retain, nonatomic) NSString * appAssetPath;

+ (NSObject *)quicklookAssetMap;
+ (char)hasAppAssets;
+ (NSObject *)colorForResource:(NSObject *)arg0;
+ (TSUQuicklookAssetColorMap *)allocWithZone:(struct _NSZone *)arg0;

- (NSString *)appAssetPath;
- (NSMutableDictionary *)assetMap;
- (void)setAssetMap:(NSMutableDictionary *)arg0;
- (void)setAppAssetPath:(NSString *)arg0;
- (TSUQuicklookAssetColorMap *)retain;
- (void)release;
- (TSUQuicklookAssetColorMap *)autorelease;
- (unsigned int)retainCount;
- (TSUQuicklookAssetColorMap *)copyWithZone:(struct _NSZone *)arg0;

@end
