/* Runtime dump - CKDFetchRecordZonePCSDiagnosticsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation
{
    CKPCSDiagnosticInformation * _pcsDiagnosticInfo;
    NSString * _identityStatus;
    NSDictionary * _invalidPCSByZoneID;
    NSDictionary * _validPCSByZoneID;
    NSArray * _recordZoneIDs;
}

@property (retain, nonatomic) CKPCSDiagnosticInformation * pcsDiagnosticInfo;
@property (retain, nonatomic) NSString * identityStatus;
@property (retain, nonatomic) NSDictionary * invalidPCSByZoneID;
@property (retain, nonatomic) NSDictionary * validPCSByZoneID;
@property (retain, nonatomic) NSArray * recordZoneIDs;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchRecordZonePCSDiagnosticsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (CKPCSDiagnosticInformation *)pcsDiagnosticInfo;
- (void)setRecordZoneIDs:(NSArray *)arg0;
- (NSArray *)recordZoneIDs;
- (void)_handleRecordZoneFetch:(id)arg0 zoneID:(CKRecordZoneID *)arg1 responseCode:(int *)arg2;
- (void)setPcsDiagnosticInfo:(CKPCSDiagnosticInformation *)arg0;
- (NSString *)identityStatus;
- (void)setIdentityStatus:(NSString *)arg0;
- (NSDictionary *)invalidPCSByZoneID;
- (void)setInvalidPCSByZoneID:(NSDictionary *)arg0;
- (NSDictionary *)validPCSByZoneID;
- (void)setValidPCSByZoneID:(NSDictionary *)arg0;

@end
