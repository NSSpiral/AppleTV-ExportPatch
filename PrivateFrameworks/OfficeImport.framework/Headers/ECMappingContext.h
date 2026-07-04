/* Runtime dump - ECMappingContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECMappingContext : NSObject
{
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > mIndexToMappedIndex;
    NSMutableDictionary * mSheetNameToMappedIndex;
    struct __CFDictionary * mObjectToMappingInfo;
    NSMutableArray * mMappingInfos;
}

+ (NSMutableArray *)mappingContext;

- (void)dealloc;
- (ECMappingContext *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct ChVector<OcText> *)mappedSheetNames;
- (unsigned int)mappingInfoCount;
- (unsigned int)mappedSheetIndexForSheetIndex:(unsigned int)arg0;
- (NSObject *)mappingInfoForObject:(NSObject *)arg0;
- (NSObject *)mappingInfoAtIndex:(unsigned int)arg0;
- (void)associateMappingInfo:(NSDictionary *)arg0 withSheetName:(NSString *)arg1 andSheetIndex:(unsigned int)arg2 andObject:(NSObject *)arg3;
- (unsigned int)mappedSheetIndexForSheetName:(NSString *)arg0;

@end
