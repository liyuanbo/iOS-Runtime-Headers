/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class <WBSParsecSearchClientStorage>, CLLocation, CLLocationManager, NSArray, NSMutableDictionary, NSNumber, NSString, NSThread, NSTimer, NSURL, NSURLQueryItem, NSURLSessionConfiguration, NSURLSessionTask, WBSParsecSearchMescalSession;

@interface WBSParsecSearchClient : NSObject <CLLocationManagerDelegate> {
    NSString *_applicationNameForUserAgent;
    NSURLSessionTask *_bagFetchTask;
    NSMutableDictionary *_bagImageData;
    NSMutableDictionary *_bagImages;
    NSString *_customFlight;
    NSString *_deviceIP;
    NSArray *_enabledDomains;
    NSURL *_feedbackFallbackURL;
    NSURL *_feedbackURL;
    NSString *_firstUseDescriptionText;
    NSString *_firstUseLearnMoreText;
    NSString *_firstUseLearnMoreURLString;
    CLLocation *_location;
    CLLocationManager *_locationManager;
    NSThread *_locationThread;
    unsigned long long _maximumCachedQueriesToSend;
    unsigned long long _maximumCachedResultsToSend;
    WBSParsecSearchMescalSession *_mescalSession;
    double _minimumIntervalBetweenQueriesFromBag;
    unsigned long long _minimumQueryLength;
    NSArray *_optionalQueryItems;
    NSNumber *_otherRenderTimeout;
    NSString *_recentlyUsedAppIdentifierListString;
    NSArray *_recentlyUsedAppIdentifierWhitelist;
    NSURL *_searchFallbackURL;
    NSNumber *_searchRenderTimeout;
    NSURL *_searchURL;
    <WBSParsecSearchClientStorage> *_storage;
    NSString *_storeFrontIdentifier;
    NSArray *_supportedDomainIdentifiers;
    NSArray *_supportedGeolocationServices;
    NSTimer *_updateTimer;
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSString *_userAgent;
    NSString *_userGUID;
    NSTimer *_userGUIDExpirationTimer;
    NSURL *_userGUIDFallbackURL;
    NSURL *_userGUIDURL;
    bool_enabled;
    bool_feedbackEnabled;
    bool_safeModeEnabled;
    bool_updatingLocation;
    bool_userGUIDEnabled;
    bool_usesLedBelly;
    int ipChangeNotificationToken;
}

@property(readonly) NSString * applicationNameForUserAgent;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEnabled,readonly) bool enabled;
@property(readonly) NSArray * enabledDomains;
@property(readonly) bool feedbackEnabled;
@property(readonly) NSURL * feedbackFallbackURL;
@property(readonly) NSURL * feedbackURL;
@property(readonly) NSString * firstUseDescriptionText;
@property(readonly) NSString * firstUseLearnMoreText;
@property(readonly) NSString * firstUseLearnMoreURLString;
@property(readonly) unsigned long long hash;
@property(readonly) CLLocation * location;
@property(readonly) unsigned long long maximumCachedQueriesToSend;
@property(readonly) unsigned long long maximumCachedResultsToSend;
@property(readonly) WBSParsecSearchMescalSession * mescalSession;
@property(readonly) double minimumIntervalBetweenQueriesFromBag;
@property(readonly) unsigned long long minimumQueryLength;
@property(readonly) NSArray * optionalQueryItems;
@property(readonly) NSNumber * otherRenderTimeout;
@property bool safeModeEnabled;
@property(readonly) NSURL * searchFallbackURL;
@property(readonly) NSNumber * searchRenderTimeout;
@property(readonly) NSURL * searchURL;
@property(readonly) NSURLQueryItem * secretKeyQueryItem;
@property(readonly) <WBSParsecSearchClientStorage> * storage;
@property(readonly) Class superclass;
@property(copy) NSArray * supportedDomainIdentifiers;
@property(readonly) NSURLSessionConfiguration * urlSessionConfiguration;

- (void).cxx_destruct;
- (void)_configureMescalFromDictionary:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (id)_customFlightQueryItem;
- (void)_fetchConfiguration;
- (void)_fetchUserGUIDIfNeeded;
- (void)_generateBagImagesFromDictionary:(id)arg1;
- (bool)_hasLocationServicesEffectiveBundleEntitlement;
- (id)_localeQueryItem;
- (id)_locationSourceForLocation:(id)arg1;
- (void)_locationThread;
- (void)_performBlock:(id)arg1;
- (void)_performBlockOnLocationThread:(id)arg1 wait:(bool)arg2;
- (void)_performBlockOnLocationThread:(id)arg1;
- (void)_performBlockOnLocationThreadAndWait:(id)arg1;
- (void)_requestDeviceIP;
- (void)_setDeviceIP:(id)arg1;
- (void)_setUserGUID:(id)arg1 expirationDate:(id)arg2;
- (void)_storeFrontIdentifierDidChange:(id)arg1;
- (void)_updateOptionalQueryItems;
- (void)_updateStoreFrontIdentifier;
- (void)_updateUserGUIDExpirationTimerWithDate:(id)arg1;
- (void)_userGUIDExpirationTimerDidFire:(id)arg1;
- (id)applicationNameForUserAgent;
- (id)enabledDomains;
- (bool)feedbackEnabled;
- (id)feedbackFallbackURL;
- (id)feedbackURL;
- (id)firstUseDescriptionText;
- (id)firstUseLearnMoreText;
- (id)firstUseLearnMoreURLString;
- (id)imageForIdentifier:(id)arg1 withScale:(double)arg2;
- (id)initWithStorage:(id)arg1 applicationNameForUserAgent:(id)arg2;
- (void)invalidate;
- (bool)isEnabled;
- (id)location;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationSource;
- (unsigned long long)maximumCachedQueriesToSend;
- (unsigned long long)maximumCachedResultsToSend;
- (id)mescalSession;
- (double)minimumIntervalBetweenQueriesFromBag;
- (unsigned long long)minimumQueryLength;
- (id)optionalQueryItems;
- (id)otherRenderTimeout;
- (void)resetUserGUID;
- (bool)safeModeEnabled;
- (id)searchFallbackURL;
- (id)searchRenderTimeout;
- (id)searchURL;
- (id)secretKeyQueryItem;
- (void)setSafeModeEnabled:(bool)arg1;
- (void)setSupportedDomainIdentifiers:(id)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (id)storage;
- (id)supportedDomainIdentifiers;
- (void)updateRecentlyUsedAppIdentifiers;
- (void)updateURLSessionConfiguration;
- (id)urlSessionConfiguration;

@end