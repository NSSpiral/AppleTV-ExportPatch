/* Runtime dump - NoteSearchContext
 * Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteSearchContext : NSObject
{
    struct __CXQuery * query;
    NSMutableArray * integerIds;
    NoteContext * noteContext;
}

@property (readonly, nonatomic) struct __CXQuery * query;

- (void)dealloc;
- (struct __CXQuery *)query;
- (void).cxx_destruct;
- (NoteSearchContext *)initWithSearchTerms:(NSArray *)arg0 context:(NSObject *)arg1;
- (char)nextSearchResults:(id *)arg0 includePrevious:(char)arg1;

@end
