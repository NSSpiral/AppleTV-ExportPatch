/* Runtime dump - DAFolder
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAFolder : NSObject
{
    char _isDefault;
    char _hasRemoteChanges;
    NSString * _folderName;
    NSString * _folderID;
    NSString * _parentFolderID;
    int _dataclass;
}

@property (copy, nonatomic) NSString * folderName;
@property (copy, nonatomic) NSString * folderID;
@property (copy, nonatomic) NSString * parentFolderID;
@property (nonatomic) int dataclass;
@property (nonatomic) char isDefault;
@property (nonatomic) char hasRemoteChanges;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)parentMailboxID;
- (char)hasRemoteChanges;
- (void)setHasRemoteChanges:(char)arg0;
- (int)dataclass;
- (void)setIsDefault:(char)arg0;
- (char)isDefault;
- (unsigned int)mailboxID;
- (NSString *)folderID;
- (NSString *)folderName;
- (NSString *)parentFolderID;
- (void)setFolderID:(NSString *)arg0;
- (void)setFolderName:(NSString *)arg0;
- (void)setParentFolderID:(NSString *)arg0;
- (void)setDataclass:(int)arg0;

@end
