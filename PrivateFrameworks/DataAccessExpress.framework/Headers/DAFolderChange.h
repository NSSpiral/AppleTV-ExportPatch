/* Runtime dump - DAFolderChange
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAFolderChange : NSObject <NSSecureCoding>
{
    char _renameOnCollision;
    int _changeType;
    NSString * _folderId;
    NSString * _parentFolderId;
    NSString * _displayName;
    int _dataclass;
    unsigned int _taskId;
    <DAFolderChangeConsumer> * _consumer;
}

@property (nonatomic) int changeType;
@property (retain, nonatomic) NSString * folderId;
@property (retain, nonatomic) NSString * parentFolderId;
@property (retain, nonatomic) NSString * displayName;
@property (nonatomic) int dataclass;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) char renameOnCollision;
@property (weak, nonatomic) <DAFolderChangeConsumer> * consumer;

+ (char)supportsSecureCoding;

- (NSObject *)mf_deferredOperation;
- (DAFolderChange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (int)dataclass;
- (void)setFolderId:(NSString *)arg0;
- (char)renameOnCollision;
- (void)setParentFolderId:(NSString *)arg0;
- (unsigned int)taskId;
- (void)setTaskId:(unsigned int)arg0;
- (DAFolderChange *)initFolderChangeWithChangeType:(int)arg0 folderId:(NSString *)arg1 parentFolderId:(NSString *)arg2 displayName:(NSString *)arg3 dataclass:(int)arg4 consumer:(<DAFolderChangeConsumer> *)arg5;
- (NSString *)folderId;
- (void)setRenameOnCollision:(char)arg0;
- (void)setDataclass:(int)arg0;
- (NSString *)parentFolderId;
- (<DAFolderChangeConsumer> *)consumer;
- (void)setConsumer:(<DAFolderChangeConsumer> *)arg0;
- (void)setChangeType:(int)arg0;
- (int)changeType;

@end
