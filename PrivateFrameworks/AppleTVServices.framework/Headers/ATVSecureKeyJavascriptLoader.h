/* Runtime dump - ATVSecureKeyJavascriptLoader
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVSecureKeyJavascriptLoader : ATVSecureKeyLoader
{
    ATVJavaScriptContext * _javaScriptContext;
}

@property (retain, nonatomic) ATVJavaScriptContext * javaScriptContext;

- (void).cxx_destruct;
- (void)startLoadingCertificateDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingContentIdentifierDataForRequest:(NSURLRequest *)arg0;
- (void)startLoadingKeyResponseDataForRequest:(NSURLRequest *)arg0;
- (ATVJavaScriptContext *)javaScriptContext;
- (int)_errorCodeForFailureOfFunctionWithName:(NSString *)arg0;
- (unsigned int)_numberOfArgumentsForSuccessCallbackForFunctionWithName:(NSString *)arg0;
- (void)_callFunctionWithName:(NSString *)arg0 withData:(NSData *)arg1 request:(NSURLRequest *)arg2 successHandler:(id /* block */)arg3;
- (ATVSecureKeyJavascriptLoader *)initWithJavaScriptContext:(ATVJavaScriptContext *)arg0;
- (void)setJavaScriptContext:(ATVJavaScriptContext *)arg0;

@end
