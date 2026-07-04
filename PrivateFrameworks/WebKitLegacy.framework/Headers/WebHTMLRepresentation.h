/* Runtime dump - WebHTMLRepresentation
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>
{
    WebHTMLRepresentationPrivate * _private;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)supportedMIMETypes;
+ (NSArray *)supportedNonImageMIMETypes;
+ (NSArray *)supportedImageMIMETypes;
+ (NSArray *)unsupportedTextMIMETypes;

- (void)dealloc;
- (void)setDataSource:(NSObject *)arg0;
- (WebHTMLRepresentation *)init;
- (NSString *)title;
- (DOMDocument *)DOMDocument;
- (void)finalize;
- (void)receivedData:(NSMutableData *)arg0 withDataSource:(NSObject *)arg1;
- (void)receivedError:(NSError *)arg0 withDataSource:(NSObject *)arg1;
- (void)finishedLoadingWithDataSource:(NSObject *)arg0;
- (char)canProvideDocumentSource;
- (NSObject *)documentSource;
- (void)_redirectDataToManualLoader:(id)arg0 forPluginView:(NSObject *)arg1;
- (char)_isDisplayingWebArchive;
- (id)searchForLabels:(id)arg0 beforeElement:(NSObject *)arg1 resultDistance:(unsigned int *)arg2 resultIsInCellAbove:(char *)arg3;
- (char)canSaveAsWebArchive;
- (NSString *)elementWithName:(NSString *)arg0 inForm:(id)arg1;
- (char)elementDoesAutoComplete:(id)arg0;
- (char)elementIsPassword:(NSString *)arg0;
- (NSObject *)formForElement:(NSObject *)arg0;
- (NSString *)currentForm;
- (NSString *)controlsInForm:(id)arg0;
- (id)searchForLabels:(id)arg0 beforeElement:(NSObject *)arg1;
- (id)matchLabels:(id)arg0 againstElement:(NSObject *)arg1;

@end
