/* Runtime dump - ECMappingInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECMappingInfo : NSObject
{
    NSString * mSheetName;
}

@property (readonly, nonatomic) NSString * sheetName;
@property (readonly, nonatomic) int rowOffset;
@property (readonly, nonatomic) int columnOffset;

+ (NSString *)mappingInfoWithSheetName:(NSString *)arg0;

- (void)dealloc;
- (int)columnOffset;
- (int)rowOffset;
- (ECMappingInfo *)initWithSheetName:(NSString *)arg0;
- (NSString *)sheetName;

@end
