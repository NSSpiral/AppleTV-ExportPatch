/* Runtime dump - NSDirectoryEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary * fileAttributes;
@property (readonly, copy) NSDictionary * directoryAttributes;
@property (readonly) unsigned int level;

- (void)skipDescendents;
- (NSObject *)nextObject;
- (unsigned int)level;
- (void)skipDescendants;
- (NSDictionary *)fileAttributes;
- (NSDictionary *)directoryAttributes;

@end
