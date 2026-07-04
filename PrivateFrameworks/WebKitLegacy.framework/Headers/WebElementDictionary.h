/* Runtime dump - WebElementDictionary
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebElementDictionary : NSDictionary
{
    struct HitTestResult * _result;
    NSMutableDictionary * _cache;
    NSMutableSet * _nilValues;
    char _cacheComplete;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)_title;
- (char)_isSelected;
- (NSEnumerator *)keyEnumerator;
- (void)finalize;
- (WebElementDictionary *)initWithHitTestResult:(struct HitTestResult *)arg0;
- (NSObject *)_domNode;
- (WebFrame *)_webFrame;
- (NSString *)_altDisplayString;
- (NSURL *)_absoluteImageURL;
- (NSURL *)_absoluteMediaURL;
- (id)_spellingToolTip;
- (NSURL *)_absoluteLinkURL;
- (NSObject *)_targetWebFrame;
- (NSString *)_titleDisplayString;
- (NSString *)_textContent;
- (id)_isLiveLink;
- (char)_isContentEditable;
- (id)_isInScrollBar;
- (void)_fillCache;

@end
