/* Runtime dump - ATVJSDocumentUpdator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVFeedDocument, ATVJSContext;
@interface ATVJSDocumentUpdator : NSObject
{
    char _isUsed;
    ATVJSContext * _context;
    ATVFeedDocument * _feedDocument;
    ATVXMLDocument * _xmlDocument;
}

@property (retain, nonatomic) ATVJSContext * context;
@property (retain, nonatomic) ATVFeedDocument * feedDocument;
@property (retain, nonatomic) ATVXMLDocument * xmlDocument;
@property (nonatomic) char isUsed;

+ (NSString *)documentUpdatorForContext:(struct OpaqueJSContext *)arg0 xmlDocument:(ATVXMLDocument *)arg1;

- (ATVFeedDocument *)feedDocument;
- (void)setFeedDocument:(ATVFeedDocument *)arg0;
- (void)setXmlDocument:(ATVXMLDocument *)arg0;
- (char)isUsed;
- (void)setIsUsed:(char)arg0;
- (ATVJSDocumentUpdator *)initWithContext:(ATVJSContext *)arg0 feedDocument:(ATVFeedDocument *)arg1 xmlDocument:(ATVXMLDocument *)arg2;
- (void)updateDocument;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (void).cxx_destruct;
- (ATVXMLDocument *)xmlDocument;

@end
