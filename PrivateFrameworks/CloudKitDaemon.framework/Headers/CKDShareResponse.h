/* Runtime dump - CKDShareResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareResponse : NSObject
{
    CKShareID * _shareID;
    CKShare * _share;
}

@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) CKShare * share;

- (NSString *)description;
- (void).cxx_destruct;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (NSString *)CKPropertiesDescription;
- (void)setShare:(CKShare *)arg0;
- (CKShare *)share;

@end
