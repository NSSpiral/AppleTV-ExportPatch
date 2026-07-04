/* Runtime dump - BRCiWorkPublishingOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCItemID * _itemID;
    NSArray * _recordIDs;
    char _forPublish;
    char _readonly;
    NSNumber * _sharingInfo;
    BRCServerZone * _serverZone;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCiWorkPublishingOperation *)initWithDocumentItem:(NSObject *)arg0 forPublish:(char)arg1 readonly:(char)arg2;
- (void)_updateItemAfterShareCompleted;

@end
