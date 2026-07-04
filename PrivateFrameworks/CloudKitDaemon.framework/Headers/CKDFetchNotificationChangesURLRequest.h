/* Runtime dump - CKDFetchNotificationChangesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest
{
    NSMutableArray * _resultChangedNotifications;
    char _moreComing;
    unsigned int _resultsLimit;
    NSData * _resultServerChangeTokenData;
    NSData * _serverChangeTokenData;
}

@property (nonatomic) unsigned int resultsLimit;
@property (retain, nonatomic) NSData * resultServerChangeTokenData;
@property (readonly, nonatomic) NSArray * resultChangedNotifications;
@property (nonatomic) char moreComing;
@property (retain, nonatomic) NSData * serverChangeTokenData;

- (void).cxx_destruct;
- (void)setResultsLimit:(unsigned int)arg0;
- (char)moreComing;
- (unsigned int)resultsLimit;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (NSData *)serverChangeTokenData;
- (NSArray *)resultChangedNotifications;
- (CKDFetchNotificationChangesURLRequest *)initWithServerChangeTokenData:(NSData *)arg0;
- (NSData *)resultServerChangeTokenData;
- (void)setMoreComing:(char)arg0;
- (void)setServerChangeTokenData:(NSData *)arg0;
- (void)setResultServerChangeTokenData:(NSData *)arg0;
- (int)operationType;

@end
