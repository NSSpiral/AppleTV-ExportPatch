/* Runtime dump - CKDGetSharesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetSharesURLRequest : CKDURLRequest
{
    id _shareFetchedBlock;
    NSArray * _shareIDs;
    NSArray * _zoneIDs;
    NSMutableDictionary * _shareIDsByRequestID;
    NSMutableDictionary * _zoneIDsByRequestID;
}

@property (copy, nonatomic) id shareFetchedBlock;
@property (retain, nonatomic) NSArray * shareIDs;
@property (retain, nonatomic) NSArray * zoneIDs;
@property (retain, nonatomic) NSMutableDictionary * shareIDsByRequestID;
@property (retain, nonatomic) NSMutableDictionary * zoneIDsByRequestID;

- (void).cxx_destruct;
- (CKDGetSharesURLRequest *)initWithShareIDs:(NSArray *)arg0;
- (NSArray *)zoneIDs;
- (void)setZoneIDs:(NSArray *)arg0;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)shareIDs;
- (NSMutableDictionary *)shareIDsByRequestID;
- (NSMutableDictionary *)zoneIDsByRequestID;
- (id /* block */)shareFetchedBlock;
- (CKDGetSharesURLRequest *)initWithZoneIDs:(NSArray *)arg0;
- (void)setShareFetchedBlock:(id /* block */)arg0;
- (void)setShareIDs:(NSArray *)arg0;
- (void)setShareIDsByRequestID:(NSMutableDictionary *)arg0;
- (void)setZoneIDsByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
