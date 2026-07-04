/* Runtime dump - FBOcclusionsStack
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOcclusionsStack : NSObject
{
    NSCountedSet * _levels;
    NSMutableDictionary * _levelToCompositeOcclusions;
    NSMutableDictionary * _keyToEntry;
    NSMutableArray * _orderedEntries;
    NSMutableSet * _dirtyKeys;
}

- (void)dealloc;
- (FBOcclusionsStack *)init;
- (char)isEmpty;
- (void)_adjustEntry:(id)arg0 forLevel:(float)arg1 occlusions:(id)arg2;
- (void)setKey:(NSString *)arg0 toLevel:(float)arg1 withOcclusions:(id)arg2;
- (void)enumerateKeysByLevelWithBlock:(id /* block */)arg0;
- (NSMutableSet *)dirtyKeys;
- (NSString *)occlusionsAppliedToKey:(NSString *)arg0;
- (char)isDirty;
- (void)removeKey:(NSString *)arg0;

@end
