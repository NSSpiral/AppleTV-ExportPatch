/* Runtime dump - DAStatusReport
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAStatusReport : NSObject
{
    char _syncingAllowed;
    NSString * _persistentUUID;
    NSString * _displayName;
    NSString * _accountType;
    NSNumber * _timeSpan;
    NSNumber * _timeInNetworking;
    NSNumber * _averageHBI;
    NSNumber * _successfulRequests;
    NSNumber * _failedNetworkRequests;
    NSNumber * _failedProtocolRequests;
    NSNumber * _downloadedElements;
    NSNumber * _uploadedElements;
    NSNumber * _falseMoreAvailableCount;
    NSString * _protocolVersion;
    NSDate * _creationDate;
    int _numHBIDataPoints;
}

@property (retain, nonatomic) NSString * persistentUUID;
@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSString * accountType;
@property (retain, nonatomic) NSNumber * timeSpan;
@property (retain, nonatomic) NSNumber * timeInNetworking;
@property (retain, nonatomic) NSNumber * averageHBI;
@property (retain, nonatomic) NSNumber * successfulRequests;
@property (retain, nonatomic) NSNumber * failedNetworkRequests;
@property (retain, nonatomic) NSNumber * failedProtocolRequests;
@property (retain, nonatomic) NSNumber * downloadedElements;
@property (retain, nonatomic) NSNumber * uploadedElements;
@property (retain, nonatomic) NSNumber * falseMoreAvailableCount;
@property (retain, nonatomic) NSString * protocolVersion;
@property (nonatomic) char syncingAllowed;
@property (retain, nonatomic) NSDate * creationDate;
@property (nonatomic) int numHBIDataPoints;

- (DAStatusReport *)init;
- (NSString *)description;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setAccountType:(NSString *)arg0;
- (NSDate *)creationDate;
- (NSString *)accountType;
- (void)setDisplayName:(NSString *)arg0;
- (void)noteTimeSpentInNetworking:(double)arg0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg0;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (NSString *)protocolVersion;
- (void)setProtocolVersion:(NSString *)arg0;
- (void)setSyncingAllowed:(char)arg0;
- (void)setPersistentUUID:(NSString *)arg0;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg0 numUploadedElements:(int)arg1;
- (void)noteFalseMoreAvailableResponse;
- (void)noteNewHBIDataPoint:(int)arg0;
- (void)setTimeSpan:(NSNumber *)arg0;
- (void)setTimeInNetworking:(NSNumber *)arg0;
- (void)setAverageHBI:(NSNumber *)arg0;
- (void)setSuccessfulRequests:(NSNumber *)arg0;
- (void)setFailedNetworkRequests:(NSNumber *)arg0;
- (void)setFailedProtocolRequests:(NSNumber *)arg0;
- (void)setDownloadedElements:(NSNumber *)arg0;
- (void)setUploadedElements:(NSNumber *)arg0;
- (void)setFalseMoreAvailableCount:(NSNumber *)arg0;
- (NSNumber *)timeSpan;
- (NSNumber *)timeInNetworking;
- (NSNumber *)averageHBI;
- (NSNumber *)successfulRequests;
- (NSNumber *)failedNetworkRequests;
- (NSNumber *)failedProtocolRequests;
- (NSNumber *)downloadedElements;
- (NSNumber *)uploadedElements;
- (NSNumber *)falseMoreAvailableCount;
- (char)syncingAllowed;
- (void)mergeStatusReport:(id)arg0;
- (int)numHBIDataPoints;
- (void)setNumHBIDataPoints:(int)arg0;
- (NSString *)persistentUUID;
- (void)setCreationDate:(NSDate *)arg0;
- (DAStatusReport *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
