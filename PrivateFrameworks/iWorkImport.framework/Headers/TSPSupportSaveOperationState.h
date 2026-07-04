/* Runtime dump - TSPSupportSaveOperationState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportSaveOperationState : NSObject
{
    char _didWriteSupportBundleSuccessfuly;
    char _shouldLeavePendingEndSave;
    NSUUID * _originalDocumentUUID;
    NSUUID * _originalVersionUUID;
    NSURL * _originalURL;
    int _updateType;
    TSUSafeSaveAssistant * _safeSaveAssistant;
    NSUUID * _documentUUID;
    NSURL * _URL;
}

@property (readonly, nonatomic) NSUUID * originalDocumentUUID;
@property (readonly, nonatomic) NSUUID * originalVersionUUID;
@property (readonly, nonatomic) NSURL * originalURL;
@property (readonly, nonatomic) char shouldUpdate;
@property (readonly, nonatomic) char preserveDocumentUUID;
@property (readonly, nonatomic) int updateType;
@property (retain, nonatomic) TSUSafeSaveAssistant * safeSaveAssistant;
@property (copy, nonatomic) NSUUID * documentUUID;
@property (copy, nonatomic) NSURL * URL;
@property (nonatomic) char didWriteSupportBundleSuccessfuly;
@property (nonatomic) char shouldLeavePendingEndSave;

- (void)setDocumentUUID:(NSUUID *)arg0;
- (NSUUID *)documentUUID;
- (char)preserveDocumentUUID;
- (char)shouldUpdate;
- (void)setShouldLeavePendingEndSave:(char)arg0;
- (char)shouldLeavePendingEndSave;
- (TSPSupportSaveOperationState *)initWithOriginalDocumentUUID:(NSUUID *)arg0 originalVersionUUID:(NSUUID *)arg1 originalURL:(NSURL *)arg2 updateType:(int)arg3;
- (void)setSafeSaveAssistant:(TSUSafeSaveAssistant *)arg0;
- (TSUSafeSaveAssistant *)safeSaveAssistant;
- (void)setDidWriteSupportBundleSuccessfuly:(char)arg0;
- (char)didWriteSupportBundleSuccessfuly;
- (NSUUID *)originalDocumentUUID;
- (NSUUID *)originalVersionUUID;
- (TSPSupportSaveOperationState *)init;
- (NSURL *)URL;
- (NSURL *)originalURL;
- (void)setURL:(NSString *)arg0;
- (void).cxx_destruct;
- (int)updateType;

@end
