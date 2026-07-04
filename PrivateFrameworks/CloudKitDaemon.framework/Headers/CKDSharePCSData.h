/* Runtime dump - CKDSharePCSData
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSharePCSData : CKDPCSData
{
    struct _OpaquePCSShareProtection * _publicPCS;
    CKShareID * _shareID;
    NSString * _shareEtag;
    int _publicPermission;
    int _myParticipantType;
    int _myParticipantPermission;
    NSString * _publicPCSEtag;
    NSData * _publicPCSData;
}

@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) NSString * shareEtag;
@property (nonatomic) int publicPermission;
@property (nonatomic) int myParticipantType;
@property (nonatomic) int myParticipantPermission;
@property (nonatomic) struct _OpaquePCSShareProtection * publicPCS;
@property (copy, nonatomic) NSString * publicPCSEtag;
@property (copy, nonatomic) NSData * publicPCSData;

+ (char)supportsSecureCoding;
+ (NSObject *)dataWithShareID:(CKShareID *)arg0 pcsData:(NSData *)arg1;

- (void)dealloc;
- (CKDSharePCSData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (int)publicPermission;
- (NSString *)CKPropertiesDescription;
- (void)setMyParticipantPermission:(int)arg0;
- (void)setMyParticipantType:(int)arg0;
- (void)setPublicPermission:(int)arg0;
- (void)setShareEtag:(NSString *)arg0;
- (void)setPublicPCSEtag:(NSString *)arg0;
- (void)setPublicPCSData:(NSData *)arg0;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection *)arg0;
- (NSString *)shareEtag;
- (NSData *)publicPCSData;
- (struct _OpaquePCSShareProtection *)publicPCS;
- (NSString *)publicPCSEtag;
- (char)decryptPCSDataWithManager:(NSObject *)arg0 error:(id *)arg1;
- (CKDSharePCSData *)initWithShareID:(CKShareID *)arg0 pcsData:(NSData *)arg1;
- (int)myParticipantPermission;
- (int)myParticipantType;

@end
