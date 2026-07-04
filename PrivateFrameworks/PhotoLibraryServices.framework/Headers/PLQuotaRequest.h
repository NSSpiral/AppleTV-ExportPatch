/* Runtime dump - PLQuotaRequest
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLQuotaRequest : AARequest
{
    NSString * _authToken;
    NSString * _personID;
}

- (void)dealloc;
- (NSURLRequest *)urlRequest;
- (PLQuotaRequest *)initWithURLString:(NSString *)arg0 authToken:(NSString *)arg1 personID:(NSString *)arg2;

@end
