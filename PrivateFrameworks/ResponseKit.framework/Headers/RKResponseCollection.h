/* Runtime dump - RKResponseCollection
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKResponseCollection : NSObject
{
    NSString * _context;
    NSMutableDictionary * _responseCatalogEditable;
    NSMutableDictionary * _responseCatalogNonEditable;
    NSMutableDictionary * _phraseMap;
}

@property (retain) NSString * context;
@property (retain) NSMutableDictionary * responseCatalogEditable;
@property (retain) NSMutableDictionary * responseCatalogNonEditable;
@property (retain) NSMutableDictionary * phraseMap;

+ (NSString *)responseCollectionWithContext:(NSString *)arg0;

- (RKResponseCollection *)init;
- (NSString *)context;
- (void)setContext:(NSString *)arg0;
- (void).cxx_destruct;
- (NSString *)_initWithContext:(NSString *)arg0;
- (void)resetResponseCatalog;
- (void)resetPhraseMap;
- (void)setResponseCatalogEditable:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)responseCatalogEditable;
- (void)setResponseCatalogNonEditable:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)responseCatalogNonEditable;
- (void)setPhraseMap:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)phraseMap;
- (NSString *)responsesForCategory:(unsigned int)arg0 gender:(unsigned int)arg1 maximumResponses:(unsigned int)arg2 withLanguage:(NSString *)arg3 options:(unsigned int)arg4;
- (id)responsesForFixedPhrase:(id)arg0 withLanguage:(NSString *)arg1;
- (void)dumpResponseCatalog;

@end
