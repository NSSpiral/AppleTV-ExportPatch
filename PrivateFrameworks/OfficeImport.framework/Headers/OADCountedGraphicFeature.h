/* Runtime dump - OADCountedGraphicFeature
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCountedGraphicFeature : NSObject
{
    id mFeature;
    unsigned int mUsageCount;
}

@property (nonatomic) unsigned int usageCount;

- (void)dealloc;
- (OADCountedGraphicFeature *)initWithFeature:(NSObject *)arg0;
- (void)incrementUsageCount;
- (int)compareUsageCount:(NSObject *)arg0;
- (unsigned int)usageCount;
- (void)setUsageCount:(unsigned int)arg0;
- (NSString *)feature;

@end
