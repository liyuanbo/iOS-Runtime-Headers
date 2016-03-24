/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {
    NSURL *_defaultLaunchURL;
    <PKLinkedApplicationDelegate> *_delegate;
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    UIImage *_iconImage;
    BOOL _loaded;
    BOOL _loading;
    unsigned int _loadingToken;
    SKStoreProductViewController *_presentedViewController;
    NSArray *_storeIDs;
    BOOL _useSmallIcon;
}

@property (nonatomic, readonly) NSNumber *averageRating;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSURL *defaultLaunchURL;
@property (nonatomic) <PKLinkedApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } expectedIconSize;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *iconImage;
@property (getter=isInstalled, nonatomic, readonly) BOOL installed;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *price;
@property (nonatomic, readonly) NSString *publisher;
@property (nonatomic, readonly) int state;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSmallIcon;

+ (void)openApplicationWithBundleID:(id)arg1 launchURL:(id)arg2;

- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { float x1; float x2; })arg2;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { float x1; float x2; })arg2 requireStrictMatch:(BOOL)arg3;
- (int)_iconVariantForScale:(float)arg1;
- (id)_imageForSize:(struct CGSize { float x1; float x2; })arg1 fromArtwork:(id)arg2 requireStrictMatch:(BOOL)arg3;
- (BOOL)_itemArtNeedsShine:(id)arg1;
- (void)_performStoreLookupWithCompletion:(id /* block */)arg1;
- (void)_unloadApplicationState;
- (void)_updateApplicationStateWithCompletion:(id /* block */)arg1;
- (BOOL)_useLibraryItem;
- (id)averageRating;
- (void)dealloc;
- (id)defaultLaunchURL;
- (id)delegate;
- (struct CGSize { float x1; float x2; })expectedIconSize;
- (id)iconImage;
- (id)init;
- (id)initWithPass:(id)arg1;
- (id)initWithStoreIDs:(id)arg1 defaultLaunchURL:(id)arg2;
- (void)installedApplicationsDidChangeNotification:(id)arg1;
- (BOOL)isInstalled;
- (id)name;
- (void)openApplication:(id)arg1;
- (id)price;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)publisher;
- (void)reloadApplicationState;
- (void)reloadApplicationStateIfNecessary;
- (void)setDefaultLaunchURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setUseSmallIcon:(BOOL)arg1;
- (int)state;
- (id)storeIDs;
- (BOOL)useSmallIcon;

@end