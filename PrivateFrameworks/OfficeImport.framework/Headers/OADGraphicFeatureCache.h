/* Runtime dump - OADGraphicFeatureCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGraphicFeatureCache : NSObject
{
    NSMutableArray * mFeatureUsageArray;
    OITSUNoCopyDictionary * mFeatureMap;
}

- (void)dealloc;
- (OADGraphicFeatureCache *)init;
- (NSObject *)countedFeatureAtIndex:(unsigned int)arg0;
- (unsigned int)cacheFeature:(NSObject *)arg0;
- (NSNumber *)featuresSortedByUsageCount;

@end
