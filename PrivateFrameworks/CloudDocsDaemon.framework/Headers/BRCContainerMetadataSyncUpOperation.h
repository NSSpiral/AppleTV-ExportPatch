/* Runtime dump - BRCContainerMetadataSyncUpOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerMetadataSyncUpOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCContainerMetadataSyncUpOperation *)initWithSession:(NSObject *)arg0;
- (void)performAfterSavingRecords:(NSArray *)arg0;

@end
