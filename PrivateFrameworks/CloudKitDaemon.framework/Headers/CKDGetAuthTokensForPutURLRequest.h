/* Runtime dump - CKDGetAuthTokensForPutURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetAuthTokensForPutURLRequest : CKDURLRequest
{
    NSMapTable * _MMCSItemsByRecordIDs;
    NSMapTable * _recordIDsByRequestIDs;
}

@property (readonly, nonatomic) NSMapTable * MMCSItemsByRecordIDs;
@property (retain, nonatomic) NSMapTable * recordIDsByRequestIDs;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (CKDGetAuthTokensForPutURLRequest *)initWithMMCSItems:(NSArray *)arg0;
- (void)setRecordIDsByRequestIDs:(NSMapTable *)arg0;
- (NSMapTable *)MMCSItemsByRecordIDs;
- (NSMapTable *)recordIDsByRequestIDs;
- (int)operationType;

@end
