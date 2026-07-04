/* Runtime dump - PBMasterLayoutMap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBMasterLayoutMap : NSObject
{
    NSMutableDictionary * mMasterIdToMasterInfoMap;
    NSMutableDictionary * mTitleIdToMasterIdInfoMap;
}

+ (NSObject *)masterLayoutMap;

- (void)dealloc;
- (PBMasterLayoutMap *)init;
- (id)slideLayoutForSlideHolder:(id)arg0;
- (NSObject *)masterInfoForMasterId:(int)arg0;
- (int)masterIdForTitleId:(int)arg0;
- (id)masterInfoForSlideHolder:(id)arg0;
- (void)setMasterInfo:(NSDictionary *)arg0 forMasterId:(int)arg1;
- (id)allMasterIds;
- (void)setMasterId:(int)arg0 forTitleId:(int)arg1;

@end
