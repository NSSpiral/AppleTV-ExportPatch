/* Runtime dump - ISPurchaseReceipt
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface ISPurchaseReceipt : NSObject
{
    NSData * mReceiptData;
    struct SecCmsMessageStr * mDecodedMessage;
    struct SecCmsSignedDataStr * mSignedData;
    NSString * mReceiptPath;
    NSString * mBundleID;
    NSString * mBundleVersion;
    NSString * mParentalControls;
    NSString * mDownloadID;
    NSString * mAdamID;
    NSDate * mPurchaseDate;
    NSString * mPurchaseDateString;
    NSString * mDSID;
    NSString * mHWType;
    NSDate * mReceiptCreationDate;
    NSString * mDeveloperID;
    NSString * mInstallerVersionID;
    NSString * mReceiptType;
    NSNumber * mFRToolVersion;
    NSString * mExpirationDateString;
    NSDate * mExpirationDate;
    NSString * mRenewalDateString;
    NSDate * mRenewalDate;
    NSString * mOraganizationDisplayName;
    NSString * mCancellationReason;
    char mHashIsValid;
    char _createdFromCoder;
}

@property (readonly) NSString * receiptType;
@property (readonly) NSString * bundleIdentifier;
@property (readonly) NSString * bundleVersion;
@property (readonly) NSString * parentalControls;
@property (readonly) NSDate * purchaseDate;
@property (readonly) NSString * purchaseDateString;
@property (readonly) NSString * dsid;
@property (readonly) NSString * hwtype;
@property (readonly) NSDate * receiptCreationDate;
@property (readonly) NSString * developerID;
@property (readonly) NSString * downloadID;
@property (readonly) NSString * adamID;
@property (readonly) NSString * installerVersionID;
@property (readonly) NSNumber * frToolVersion;
@property (readonly) NSDate * expirationDate;
@property (readonly) NSDate * renewalDate;
@property (readonly) NSString * renewalDateString;
@property (readonly) NSString * organizationDisplayName;
@property (readonly) NSString * cancellationReason;
@property (readonly) char isVPPLicensed;
@property (readonly) char isRevoked;
@property (readonly) NSData * receiptData;
@property (readonly) NSString * receiptDataString;
@property (readonly) char isProductionReceipt;

+ (NSString *)receiptPathForBundleAtPath:(NSString *)arg0;
+ (NSString *)receiptWithContentsOfFile:(NSString *)arg0;
+ (NSString *)receiptFromBundleAtPath:(NSString *)arg0;
+ (NSURL *)receiptFromBundleAtURL:(NSURL *)arg0;

- (NSDate *)renewalDate;
- (char)isRevoked;
- (void)dealloc;
- (NSString *)bundleIdentifier;
- (char)isValid;
- (ISPurchaseReceipt *)initWithContentsOfFile:(NSString *)arg0;
- (char)_load;
- (NSString *)dsid;
- (NSString *)bundleVersion;
- (NSDate *)expirationDate;
- (NSDate *)purchaseDate;
- (char)isVPPLicensed;
- (struct __CFArray *)_copySignedDataCertificates;
- (NSDate *)receiptCreationDate;
- (char)_checkWWDRIssuerForTrust:(struct __SecTrust *)arg0;
- (int)_verifySignatureCheckRevocation:(char)arg0 checkExpiration:(char)arg1 useCurrentDate:(char)arg2;
- (char)validateAndCheckGUIDSeparately:(char *)arg0;
- (NSData *)receiptData;
- (int)checkSignature;
- (int)checkSignatureSkipRevocation;
- (int)checkSignatureAgainstCurrentDate;
- (char)validateAndCheckGUIDSepately:(char *)arg0;
- (NSString *)receiptDataString;
- (char)isProductionReceipt;
- (NSString *)receiptType;
- (NSString *)purchaseDateString;
- (NSString *)parentalControls;
- (NSString *)downloadID;
- (NSString *)adamID;
- (NSString *)hwtype;
- (NSString *)developerID;
- (NSString *)installerVersionID;
- (NSNumber *)frToolVersion;
- (NSString *)renewalDateString;
- (NSString *)organizationDisplayName;
- (NSString *)cancellationReason;

@end
