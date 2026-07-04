/* Runtime dump - CKDRecordPCSData
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordPCSData : CKDPCSData
{
    CKRecordID * _recordID;
    CKDPCSData * _zonePCSData;
    CKDPCSData * _sharePCSData;
}

@property (retain, nonatomic) CKRecordID * recordID;
@property (retain, nonatomic) CKDPCSData * zonePCSData;
@property (retain, nonatomic) CKDPCSData * sharePCSData;

+ (char)supportsSecureCoding;
+ (NSObject *)dataWithRecordID:(CKRecordID *)arg0 pcsData:(NSData *)arg1;

- (CKDRecordPCSData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (unsigned long long)itemID;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (void)setZonePCSData:(CKDPCSData *)arg0;
- (void)setSharePCSData:(CKDPCSData *)arg0;
- (CKDPCSData *)zonePCSData;
- (CKDPCSData *)sharePCSData;
- (char)decryptPCSDataWithManager:(NSObject *)arg0 error:(id *)arg1;
- (CKDRecordPCSData *)initWithRecordID:(CKRecordID *)arg0 pcsData:(NSData *)arg1;

@end
