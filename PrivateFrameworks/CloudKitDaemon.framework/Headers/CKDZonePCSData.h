/* Runtime dump - CKDZonePCSData
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZonePCSData : CKDPCSData
{
    CKRecordZoneID * _zoneID;
}

@property (retain, nonatomic) CKRecordZoneID * zoneID;

+ (char)supportsSecureCoding;
+ (NSObject *)dataWithZoneID:(CKRecordZoneID *)arg0 pcsData:(NSData *)arg1;

- (CKDZonePCSData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (unsigned long long)itemID;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (char)decryptPCSDataWithManager:(NSObject *)arg0 error:(id *)arg1;
- (CKDZonePCSData *)initWithZoneID:(CKRecordZoneID *)arg0 pcsData:(NSData *)arg1;

@end
