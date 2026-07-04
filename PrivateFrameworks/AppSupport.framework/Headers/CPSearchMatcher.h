/* Runtime dump - CPSearchMatcher
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPSearchMatcher : NSObject
{
    int _options;
    NSArray * _components;
    NSArray * _asciiComponents;
    NSData * _wholeSearchStringData;
    NSData * _context;
}

- (void)dealloc;
- (char)matchesASCIIString:(char *)arg0 matchType:(int)arg1;
- (CPSearchMatcher *)initWithSearchString:(NSString *)arg0 andLocale:(NSObject *)arg1 andOptions:(int)arg2;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0 matchType:(int)arg1;
- (CPSearchMatcher *)initWithSearchString:(NSString *)arg0;
- (CPSearchMatcher *)initWithSearchString:(NSString *)arg0 andLocale:(NSObject *)arg1;
- (char)matchesUTF8String:(char *)arg0 matchType:(int)arg1;
- (CPSearchMatcher *)initWithSearchString:(NSString *)arg0 options:(int)arg1;
- (char)matchesUTF8String:(char *)arg0;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
