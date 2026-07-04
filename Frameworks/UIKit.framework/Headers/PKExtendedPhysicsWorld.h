/* Runtime dump - PKExtendedPhysicsWorld
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface PKExtendedPhysicsWorld : PKPhysicsWorld

@property (nonatomic) char debugEnabled;

- (NSArray *)debugPaths;
- (char)supportsDebug;
- (char)debugEnabled;
- (void)setDebugEnabled:(char)arg0;

@end
