/* Runtime dump - PFUbiquityPeerReceipt
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile
{
    PFUbiquityKnowledgeVector * _kv;
    NSDate * _writeDate;
}

@property (readonly, nonatomic) PFUbiquityLocation * receiptFileLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * kv;
@property (retain, nonatomic) NSDate * writeDate;

- (PFUbiquityPeerReceipt *)initWithLocalPeerID:(NSString *)arg0 andKnowledgeVector:(id)arg1 forPeerID:(NSObject *)arg2 storeName:(NSString *)arg3 modelVersionHash:(NSString *)arg4 andUbiquityRootLocation:(NSObject *)arg5;
- (PFUbiquityKnowledgeVector *)kv;
- (PFUbiquityPeerReceipt *)initWithLocalPeerID:(NSString *)arg0 andReceiptFileLocation:(NSObject *)arg1;
- (NSDate *)writeDate;
- (char)loadFileFromLocation:(NSObject *)arg0 error:(id *)arg1;
- (char)writeFileToLocation:(NSObject *)arg0 error:(id *)arg1;
- (PFUbiquityPeerReceipt *)initWithLocalPeerID:(NSString *)arg0 receiptPeerID:(NSObject *)arg1 storeName:(NSString *)arg2 modelVersionHash:(NSString *)arg3 andUbiquityRootLocation:(NSObject *)arg4;
- (PFUbiquityLocation *)receiptFileLocation;
- (void)setWriteDate:(NSDate *)arg0;
- (void)dealloc;
- (PFUbiquityPeerReceipt *)init;
- (NSString *)description;

@end
