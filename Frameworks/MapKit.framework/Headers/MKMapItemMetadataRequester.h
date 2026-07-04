/* Runtime dump - MKMapItemMetadataRequester
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataRequester : NSObject <NSURLConnectionDelegate>
{
    NSMapTable * _requestsForURLs;
    NSMapTable * _connectionsForURLs;
    NSMapTable * _dataForConnections;
    char _hasCheckedYelpAccountCredentials;
    ACAccountStore * _accountStore;
    ACAccountCredential * _yelpAccountCredentials;
    OAURLRequestSigner * _signer;
}

@property (readonly, nonatomic) OAURLRequestSigner * signer;
@property (readonly, nonatomic) ACAccountCredential * yelpAccountCredentials;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MKMapItemMetadataRequester *)sharedInstance;

- (void)sendRequest:(NSURLRequest *)arg0;
- (OAURLRequestSigner *)signer;
- (void)handleConnection:(NSURLConnection *)arg0 withData:(NSData *)arg1 error:(NSError *)arg2;
- (ACAccountCredential *)yelpAccountCredentials;
- (void)cancelRequestsForMapItem:(NSObject *)arg0;
- (void)dealloc;
- (MKMapItemMetadataRequester *)init;
- (void)connection:(NSURLConnection *)arg0 didFailWithError:(NSError *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveData:(NSData *)arg1;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg0;
- (void).cxx_destruct;
- (ACAccountStore *)accountStore;
- (void)accountStoreDidChange:(NSDictionary *)arg0;

@end
