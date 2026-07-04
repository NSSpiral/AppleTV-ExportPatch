/* Runtime dump - PLBBTelephonyRegMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBTelephonyRegMsg : PLBasebandMessage
{
    unsigned char _changed;
    NSNumber * _cellID;
    NSNumber * _lac;
    NSNumber * _dataAttached;
    NSNumber * _dataActive;
    NSString * _dataIndicator;
    NSNumber * _homeNetwork;
    NSString * _registrationStatus;
    NSString * _operatorName;
    NSDate * _timeUpdate;
    NSDictionary * _telRegInfo;
}

@property (retain) NSNumber * cellID;
@property (retain) NSNumber * lac;
@property (retain) NSNumber * dataAttached;
@property (retain) NSNumber * dataActive;
@property (retain) NSString * dataIndicator;
@property (retain) NSNumber * homeNetwork;
@property (retain) NSString * registrationStatus;
@property (retain) NSString * operatorName;
@property (retain) NSDate * timeUpdate;
@property (retain) NSDictionary * telRegInfo;
@property unsigned char changed;

+ (PLBBTelephonyRegMsg *)bbEuLogMsgNameTelephonyReg;

- (PLBBTelephonyRegMsg *)init;
- (void).cxx_destruct;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (void)setChanged:(unsigned char)arg0;
- (void)setTelRegInfo:(NSDictionary *)arg0;
- (void)logEventPointTelephonyRegistration;
- (void)logEventPointTelephonyRegistrationAtInit;
- (unsigned char)changed;
- (NSString *)operatorName;
- (void)setOperatorName:(NSString *)arg0;
- (id)humanReadableRegistrationStatus:(id)arg0;
- (id)humanReadableDataIndicator:(id)arg0;
- (void)setAttrCellID:(NSObject *)arg0;
- (void)setAttrLac:(id)arg0;
- (void)setAttrDataAttached:(id)arg0;
- (void)setAttrDataActive:(id)arg0;
- (void)setAttrDataIndicator:(id)arg0;
- (void)setAttrHomeNetwork:(id)arg0;
- (void)setAttrRegistrationStatus:(id)arg0;
- (void)setAttrOperatorName:(NSString *)arg0;
- (void)fillPLEntryAndSend:(id)arg0;
- (NSDictionary *)telRegInfo;
- (void)processTelReg;
- (NSNumber *)lac;
- (NSNumber *)cellID;
- (NSNumber *)homeNetwork;
- (NSNumber *)dataAttached;
- (NSNumber *)dataActive;
- (NSString *)dataIndicator;
- (NSString *)registrationStatus;
- (void)setCellID:(NSNumber *)arg0;
- (void)setTimeUpdate:(NSDate *)arg0;
- (void)setLac:(NSNumber *)arg0;
- (void)setDataAttached:(NSNumber *)arg0;
- (void)setDataActive:(NSNumber *)arg0;
- (void)setDataIndicator:(NSString *)arg0;
- (void)setHomeNetwork:(NSNumber *)arg0;
- (void)setRegistrationStatus:(NSString *)arg0;
- (void)refreshTelephonyReg;
- (NSDate *)timeUpdate;

@end
