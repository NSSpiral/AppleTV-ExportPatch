/* Runtime dump - CKDModifyShareMetadata
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareMetadata : NSObject
{
    CKShareID * _shareID;
    char _isDelete;
    CKShare * _share;
    CKDeleteShareInfo * _deleteInfo;
    unsigned int _state;
    NSError * _error;
}

@property (readonly, nonatomic) CKShare * share;
@property (readonly, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) CKDeleteShareInfo * deleteInfo;
@property (readonly, nonatomic) char isDelete;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSError * error;

+ (NSObject *)_stringForUploadState:(unsigned int)arg0;
+ (CKDModifyShareMetadata *)modifyMetadataWithShare:(CKShare *)arg0;
+ (NSObject *)modifyMetadataForDeleteWithShareID:(CKShareID *)arg0;

- (NSString *)description;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (void).cxx_destruct;
- (NSError *)error;
- (CKShareID *)shareID;
- (CKDModifyShareMetadata *)initWithShareID:(CKShareID *)arg0;
- (CKShare *)share;
- (CKDModifyShareMetadata *)initWithShare:(CKShare *)arg0;
- (char)isDelete;
- (CKDeleteShareInfo *)deleteInfo;
- (void)setDeleteInfo:(CKDeleteShareInfo *)arg0;
- (void)setError:(NSError *)arg0;

@end
