/* Runtime dump - UserFSFolder
 * Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSFolder : UserFSItem

- (char)isDirectory;
- (char)enumerateChildrenAndReturnError:(id *)arg0 callback:(id /* block */)arg1;
- (char)deleteChildNamed:(id)arg0 error:(id *)arg1;
- (id)childNamed:(id)arg0 error:(id *)arg1;
- (id)_pathForChildNamed:(id)arg0;

@end
