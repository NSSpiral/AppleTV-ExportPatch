/* Runtime dump - ATVSecureKeyStandardConnector
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyStandardConnector : NSObject <ATVSecureKeyStandardLoaderRequestGenerating, ATVSecureKeyStandardLoaderConnectionHandling>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)isStoreDomainURL:(NSURL *)arg0;
- (id)secureKeyStandardLoader:(ATVSecureKeyStandardLoader *)arg0 requestForFetchingDataFromURL:(NSURL *)arg1;
- (id)secureKeyStandardLoader:(ATVSecureKeyStandardLoader *)arg0 requestForPostingData:(NSData *)arg1 toURL:(NSURL *)arg2;
- (void)secureKeyStandardLoader:(ATVSecureKeyStandardLoader *)arg0 sendAsynchronousRequest:(NSURLRequest *)arg1 completionHandler:(id /* block */)arg2;

@end
