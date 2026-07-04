/* Runtime dump - CKDeleteShareInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDeleteShareInfo : NSObject
{
    CKShareID * _shareID;
    CKDSharePCSData * _pcsData;
}

@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) CKDSharePCSData * pcsData;

- (void).cxx_destruct;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (void)setPcsData:(CKDSharePCSData *)arg0;
- (CKDSharePCSData *)pcsData;

@end
